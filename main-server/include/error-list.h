#ifndef H_MAIN_SERVER_ERROR_LIST
#define H_MAIN_SERVER_ERROR_LIST





#define MS_ERROR_CONNECTION_EXISTS 400
// #define MS_ERROR_CONNECTION_REJECTED_USING_VPN 401
#define MS_ERROR_CONNECTION_REJECTED 402
#define MS_ERROR_CONNECTION_NOT_EXISTS 403

#define MS_ERROR_FAILED_TO_LOGIN_INCORRECT 404
#define MS_ERROR_FAILED_TO_LOGIN_NOT_EXISTS 405
#define MS_ERROR_FAILED_TO_LOGIN_BANNED 406
#define MS_ERROR_FAILED_TO_LOGIN_BAD_DATA_SYNTAX 407

#define MS_ERROR_FAILED_TO_REGISTER_USERNAME_EXISTS 408
#define MS_ERROR_FAILED_TO_REGISTER_EMIAL_EXISTS 409
#define MS_ERROR_FAILED_TO_REGISTER_EASY_PASSWORD 410
#define MS_ERROR_FAILED_TO_REGISTER_BAD_DATA_SYNTAX 411

#defIne MS_ERROR_FAILED_TO_LOBBY_CREATION_INVALID_IDENTITY 412
#defIne MS_ERROR_FAILED_TO_LOBBY_CREATION_CANT_OWN_TWO_LOBBY 413
#defIne MS_ERROR_FAILED_TO_LOBBY_CREATION_FORBIDDEN_FOR_YOU 414
#defIne MS_ERROR_FAILED_TO_LOBBY_CREATION_BAD_DATA_SYNTAX 415

#defIne MS_ERROR_FAILED_TO_GET_LOBBY_LIST_NO_LOBBY_AVAIABLE 416
#defIne MS_ERROR_FAILED_TO_GET_LOBBY_INFO_LOBBY_NOT_FOUND 417
#defIne MS_ERROR_FAILED_TO_GET_LOBBY_INFO_BAD_DATA_SYNTAX 418

#endif