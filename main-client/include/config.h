#ifndef H_MAIN_CLIENT_CONFIG_FILE
#define H_MAIN_CLIENT_CONFIG_FILE

//MC means MainClient

//window
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define WINDOW_TITLE "Fluffy Multiplayer App"

#define FORM_HIDE_CHARECTER '*'
#define STATES_ASSET_PATH "./assets/states/"

#define MC_PATH_TO_FONTS "./assets/fonts/"
#define MC_DEFAULT_FONT "arial.ttf"

#define MC_DEFAULT_PORT 13333

#define MC_RECEIVE_BUFFER 1024
#define CLIENT_LOCAL_SERVER_LIST_FILE "serverlist.txt"

#define MC_IP_PORT_SEPARATOR ":"
#define MC_IP_PORT_ENDLINE ";"

#define MC_REQUEST_DELIMITER "^"
#define MC_REQUEST_CLOSER "~"

#define MC_SERVER_DEFAULT_IP "127.0.0.1"
#define MC_SERVER_DEFAULT_PORT 8888

#define MC_REQUEST_TIMEOUT 5000
#define MC_STATE_BIND_PICK_PORT_TRY_COUNT 10

#endif
