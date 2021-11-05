/**
 * OSA significant events.
 * Author: Adam Hutchings
 * Date: November 4, 2021
 */

#ifndef OSA_SIGNIFICANT_EVENT_H
#define OSA_SIGNIFICANT_EVENT_H

#ifdef __cplusplus
    extern "C" {
#endif

#include <OSA/event_types/OSA_event_types.h>

struct OSA_internal_significant_event {

    OSA_event_type                   event_type;

    /* Team number OR alliance */
    struct {
        union {
            unsigned alliance;
            unsigned team;
        } as;
        enum {
            OSA_TEAM,
            OSA_ALLIANCE
        } type;
    } responsible;

    unsigned seconds_before_game_end;

    unsigned team_collecting_data;

};

#ifdef OSA_significant_event
    #error "OSA_significant_event may not be defined"
#else
    typedef struct OSA_internal_significant_event_t OSA_significant_event;
#endif

#ifdef __cplusplus
    }
#endif

#endif /* OSA_SIGNIFICANT_EVENT_H */
