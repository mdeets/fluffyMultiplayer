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
#define CLIENT_LOCAL_APP_CONFIG_FILE "app.txt"

#define MC_IP_PORT_SEPARATOR ":"
#define MC_IP_PORT_ENDLINE ";"

#define MC_APP_CONFIG_IDENTITY_KEY "identity"
#define MC_APP_CONFIG_SEPERATOR "="
#define MC_APP_CONFIG_ENDLINE ";"
#define MC_IDENTITY_MIN_LENGTH 31
#define MC_IDENTITY_MAX_LENGTH 32

#define MC_REQUEST_DELIMITER ",&"
#define MC_REQUEST_CLOSER "~"

#define MC_SERVER_DEFAULT_IP "127.0.0.1"
#define MC_SERVER_DEFAULT_PORT 8888

#define MC_REQUEST_TIMEOUT 1000
#define MC_STATE_BIND_PICK_PORT_TRY_COUNT 10

#define MC_MINUMUM_RESPONSE_CODE 100
#define MC_RESPONSE_POSITION_MIN_INDEX 0
#define MC_RESPONSE_POSITION_MAX_INDEX 3

#endif
