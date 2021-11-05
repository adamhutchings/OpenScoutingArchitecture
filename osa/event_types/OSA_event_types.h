/**
 * All event types, for all years.
 * Author: Adam Hutchings
 * Date: November 4, 2021
 */

#ifndef OSA_EVENT_TYPES_H
#define OSA_EVENT_TYPES_H

#ifdef __cplusplus
    extern "C" {
#endif

#ifdef OSA_event_type
    #error "OSA_event_type may not be defined"
#else
    typedef unsigned OSA_event_type;
#endif

/* --- EVENT TYPES --- */

#define OSA_NO_EVENT                                     ((OSA_event_type) 0   )
#define OSA_ERROR_EVENT                                  ((OSA_event_type) 1   )
#define OSA_2020_LOW_GOAL_SCORE_EVENT                    ((OSA_event_type) 2   )
#define OSA_2020_MID_GOAL_SCORE_EVENT                    ((OSA_event_type) 3   )
#define OSA_2020_HIGH_GOAL_SCORE_EVENT                   ((OSA_event_type) 4   )
#define OSA_2020_ROTATION_EVENT                          ((OSA_event_type) 5   )
#define OSA_2020_POSITION_EVENT                          ((OSA_event_type) 6   )

/* Increment this when adding new types */
#define OSA_2020_EVENT_TYPE_COUNT                        ((OSA_event_type) 7   )

#ifdef __cplusplus
    }
#endif

#endif /* OSA_EVENT_TYPES_H */
