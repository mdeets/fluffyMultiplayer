#include "../include/processData.h"


namespace FluffyMultiplayer
{
  int ProcessData::separateCode(const std::string& data)
  {
    //these MS_DATA_CODE_INDEX_X are from config.h
    std::string code_str = ( data[MS_DATA_CODE_INDEX_A] + data[MS_DATA_CODE_INDEX_B] + data[MS_DATA_CODE_INDEX_C] );
    const char* temp = _data.c_str();
    return std::atoi(temp);
  }

  bool ProcessData::isConnectionExists(const boost::asio::ip::address& senderIp, const unsigned short& senderPort);
  {
    for (int i = 0; i < clientList.size(); i++)
      if(clientList[i].ip == senderIp && clientList[i].port == senderPort)
        return true;
    return false;
  }

  void ProcessData::sendData(int code, udp::socket& socket, udp::endpoint& receiver, std::string data="")
  {
    std::string message = std::to_string(code);
    if(data.length()>1)
      message+=data;
      
    socket.send_to(boost::asio::buffer(message), receiver);
  }


  void ProcessData::connectClient(const boost::asio::ip::address& ip, const unsigned short& port)
  {
    FluffyMultiplayer::ConnectedClients temp(ip,port);
    clientList.push_back(temp);
  }

  void ProcessData::disconnectClient(const boost::asio::ip::address& ip, const unsigned short& port)
  {
    //remove ip n port from client list
  }


  void ProcessData::process(udp::socket& socket, std::vector<FluffyMultiplayer::SocketDataStack>& stack, FluffyMultiplayer::FluffyDatabase& db)
  {
      for(int i=0; i<=stack.size(); i++)
      {
        udp::endpoint receiver(stack[i].ip, stack[i].port);
        switch (stack[i].code)
        {
          case MS_REQUEST_CONNECT:
          {
            if(isConnectionExists(stack[i].ip,stack[i].port))
              sendData(MS_ERROR_CONNECTION_EXISTS,socket,receiver);
            else
            {
              connectClient(stack[i].ip,stack[i].port);
              sendData(MS_RESPONSE_CONNECTION_ACCEPTED,socket,receiver);
            }
          }break;

          case MS_REQUEST_DISCONNECT:
          {
            if(!isConnectionExists(stack[i].ip,stack[i].port))
              sendData(MS_ERROR_CONNECTION_NOT_EXISTS,socket,receiver);
            else
            {
              disconnectClient(stack[i].ip,stack[i].port);
              sendData(MS_RESPONSE_DISCONNECTED,socket,receiver);
            }

          }break;

          case MS_REQUEST_LOGIN:
          {

          }break;

          case MS_REQUEST_REGISTER:
          {

          }break;

          case MS_REQUEST_CREATE_LOBBY:
          {

          }break;

          case MS_REQUEST_GET_LOBBY_LIST:
          {

          }break;

          case MS_REQUEST_GET_LOBBY_INFO:
          {

          }break;

          case MS_REQUEST_LATEST_VERSION:
          {
            if(!isConnectionExists(stack[i].ip,stack[i].port))
              sendData(MS_ERROR_CONNECTION_NOT_EXISTS,socket,receiver);
            else
              sendData(MS_RESPONSE_SUCCESS_LATEST_VERSION,socket,receiver,MS_VERSION);
          }break;

          default:
          {
            std::cout << "Unknown request code is: " << stack.code << std::endl;
          }break;
        }

        //remove processed element
        stack.pop_back();
      }
  }//end of function


}//end of namespace