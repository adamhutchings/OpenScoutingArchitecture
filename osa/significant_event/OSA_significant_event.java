package osa.significant_event;

/**
 * Significant events in Java.
 * @author Adam Hutchings
 * @since 0.0.1
 */
public class OSA_significant_event {

    public int eventType;

    private int alliance;
    private int teamNum;

    private boolean individualTeamResponsible;

    public int teamCollectingData;
    public int secondsBeforeGameEnd;

    public OSA_significant_event() {}

    public int getAlliance() throws IllegalStateException {
        if (individualTeamResponsible) {
            throw new IllegalStateException("Cannot get alliance for individual team responsible event");
        }
        return alliance;
    }

    public int getTeamNum() throws IllegalStateException {
        if (!individualTeamResponsible) {
            throw new IllegalStateException("Cannot get team for non-individual team responsible event");
        }
        return teamNum;
    }

    public void setAlliance(int a) {
        alliance = a;
        individualTeamResponsible = false;
    }

    public void setTeamNum(int t) {
        teamNum = t;
        individualTeamResponsible = true;
    }
    
}
