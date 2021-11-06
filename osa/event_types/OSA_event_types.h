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
#define OSA_INCAP_EVENT                                  ((OSA_event_type) 2   )
#define OSA_FOUL_EVENT                                   ((OSA_event_type) 3   )
#define OSA_TECH_FOUL_EVENT                              ((OSA_event_type) 4   )
#define OSA_YELLOW_CARD_EVENT                            ((OSA_event_type) 5   )
#define OSA_RED_CARD_EVENT                               ((OSA_event_type) 6  )

#define OSA_2020_LOW_GOAL_SCORE_EVENT                    ((OSA_event_type) 7   )
#define OSA_2020_HIGH_GOAL_SCORE_EVENT                   ((OSA_event_type) 8   )
#define OSA_2020_INNER_GOAL_SCORE_EVENT                  ((OSA_event_type) 9   )
#define OSA_2020_ROTATION_EVENT                          ((OSA_event_type) 10  )
#define OSA_2020_POSITION_EVENT                          ((OSA_event_type) 11  )
#define OSA_2O20_BEGIN_CLIMB_EVENT                       ((OSA_event_type) 12  )
#define OSA_2020_SUCCESSFUL_CLIMB_EVENT                  ((OSA_event_type) 13  )
#define OSA_2020_BEGIN_HANG_EVENT                        ((OSA_event_type) 14  )
#define OSA_2020_SUCCESSFUL_HANG_EVENT                   ((OSA_event_type) 15  )

/* Increment this when adding new types */
#define OSA_EVENT_TYPE_COUNT                             ((OSA_event_type) 16  )

#ifdef __cplusplus
    }
#endif

#endif /* OSA_EVENT_TYPES_H */
