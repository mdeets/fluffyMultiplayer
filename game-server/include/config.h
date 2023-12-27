#ifndef H_CONFIG
#define H_CONFIG


#define MC_RECEIVE_BUFFER 1024
#define MS_DATA_ENCRYPT_DECRYPT_SHIFT 5

#define DEFAULT_PORT_TEXT 7777
#define DEFAULT_PORT_VOICE 9999

#define PRINT_LOGS_LEVEL FluffyMultiplayer::LogType::all
#define LOG_FILE "./gs.log"



#define MS_RECEIVED_DATA_MINIMUM_LENGTH 1
#define MS_DATA_DELIMITER ",&"
#define MS_REQUEST_CLOSER "~"


#define DEFAULT_PLAYER_NAME "?player?"
#define DEFAULT_PLAYER_VOICE_ENABLE false

#endif
