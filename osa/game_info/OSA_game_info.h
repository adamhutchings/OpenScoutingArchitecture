/**
 * Information for games.
 * Author: Adam Hutchings
 * Date: November 4, 2021
 */

#ifndef OSA_GAME_INFO_H
#define OSA_GAME_INFO_H

#ifdef __cplusplus
    extern "C" {
#endif

struct OSA_internal_game_info {

    /* Year of game being released */
    unsigned                              year;

    /* Title of game */
    const char *                          title;

    /* URL to PDF of game manual */
    const char *                          manual_url;

};

#ifdef OSA_game_info
    #error "OSA_game_info may not be defined"
#else
    typedef struct OSA_internal_game_info OSA_game_info;
#endif

extern OSA_game_info                      OSA_2020_game_info;

/* TODO - add more when new games are released */

#ifdef __cplusplus
    }
#endif

#endif /* OSA_GAME_INFO_H */
