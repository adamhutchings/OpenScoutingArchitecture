/**
 * Event types for Java.
 * @author Adam Hutchings
 * @since 0.0.1
 */

package osa.event_types;

public final class OSA_event_type {

    /**
     * No construction.
     */
    private OSA_event_type() {
        //
    }

    public static final int OSA_NO_EVENT                        = 0;
    public static final int OSA_ERROR_EVENT                     = 1;
    public static final int OSA_INCAP_EVENT                     = 2;
    public static final int OSA_FOUL_EVENT                      = 3;
    public static final int OSA_TECH_FOUL_EVENT                 = 4;
    public static final int OSA_YELLOW_CARD_EVENT               = 5;
    public static final int OSA_RED_CARD_EVENT                  = 6;
    public static final int OSA_2020_LOW_GOAL_SCORE_EVENT       = 7;
    public static final int OSA_2020_HIGH_GOAL_SCORE_EVENT      = 8;
    public static final int OSA_2020_INNER_GOAL_SCORE_EVENT     = 9;
    public static final int OSA_2020_ROTATION_EVENT             = 10;
    public static final int OSA_2020_POSITION_EVENT             = 11;
    public static final int OSA_2O20_BEGIN_CLIMB_EVENT          = 12;
    public static final int OSA_2020_SUCCESSFUL_CLIMB_EVENT     = 13;
    public static final int OSA_2020_BEGIN_HANG_EVENT           = 14;
    public static final int OSA_2020_SUCCESSFUL_HANG_EVENT      = 15;
    public static final int OSA_EVENT_TYPE_COUNT                = 16;

}
