# OpenScoutingArchitecture


### Intro


This is the repository containing the OpenScoutingArchitecture standard, as
markdown text, in this README document.


# OpenScoutingArchitecture specification v0.0.1


## Preamble


### Rationale

In my time as a member of a robotics team, I have seen some conflict, revolving
around the interfaces between different parts of the code. Such conflict was a
large problem, when the overall structure of the code was unclear and further
development could become difficult. As such, I came up with the idea of a
reusable specification for an FRC scouting system that would allow for reusable
code and a clear large-scale structure for the codebase.


\- Adam Hutchings


### Authorship


This has been authored by Adam Hutchings, in the later half of 2021. Please
contact me at adam.abahot@gmail.com if you have any questions. Also, feel free
to put your name here if you contribute. If so, thank you. Your contribution
will make a difference for making clear, reusable code for everybody.


## Goals


OpenScoutingArchitecture, henceforth referred to as the "Standard", refers to an
organizational structure for a system to receive and analyze data from FRC
matches, henceforth referred to as a "scouting system". What follows in this
document is a list of requirements and definitions to make those requirements
more clear.


## Conforming Implementations


A list of requirements makes up the remainder of this document, which are all
given a unique ID. Every "conforming implementation", or a scouting system which
conforms to the Standard, must satisfy every requirement in this document to be
considered conformant to v0.0.1 of the Standard.


## Large-Scale Organization (1)


1.1

- Every conforming implementation shall be separable into at least three parts,
one which collects the data (referred to as the "match collection"), one which
analyzes the data (referred to as the "backend"), and one which presents the
finished data (referred to as the "viewer".) (It is not the case that these must
be the only parts of a conforming implementation, but all such implementations
shall have these three parts separate to the extent that it would be possible
to run each of the parts as a separate application.)

1.2

- Every conforming implementation shall provide an "implementation setting" file
which shall be usable to query parameters of the implementation. (More
information about this is in a later requirement.)


## Match Collection (2)


2.1

- Each conforming "match collection" implementation shall provide capabilities
for collecting data in real time, during the game.

2.2

- Each conforming "match collection" implementation shall provide capabilites
for sending data to the "backend", immediately after the game.

2.3
- Each conforming "match collection" implementation shall collect and transmit
the following data to the "backend":
    - 2.3.1 All "significant events" happening during the game and the time they
    happen.
        - A "significant event" is defined as any event that ONLY carries the
        following information:
            - 2.3.1.1 A way to uniquely identify EITHER the number of the team
            OR the color of the alliance responsible for the event.
            - 2.3.1.2 When, during the game, the event took place.
            - 2.3.1.3 What type of event it is.
    - 2.3.2 The number of the team collecting the data.
    - 2.3.3 Any data needed to uniquely identify the exact match from which the
    data was collected.

2.4
- Each conforming "match collection" implementation shall provide a method to
produce an object of type "OSA_significant_event" from any "significant event"
collected in a given match. This type is defined by this standard in one of the
following files depending on implementation language:
    - C / C++ - OSA/significant_event/OSA_significant_event.h

## Implementation Setting (???)
x.1
- The implementation setting file shall define either in itself or in an
accompanying file the following variables, all of integer type and none equal:
    - OSA_team_num (this is NOT the team number of the implementing team)
    - [TODO]
