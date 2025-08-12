# tetris in c

a minimal tetris-style game written in c, build step by step from scratch


# game rules
- there are tetrominoes that fall inside a 10x20 board

- player can move left/right the pieces that fall one cell at at a time

- player can rotate pieces (90°/180°/270°/380°)

- when pieces lands and cannot move down, it locks into the board.

- when is completed, lines are cleared; blocks above fall down.

- the game is over whern a new piece cannot enter at spawn

- scoring: single/dobule/triple award increasing points



# projects goals

- start from a tiny, playable core (`mvp0`), then iterate.
- keep logic independent from rendering (terminal first, possible sdp later)
- keep the code approachable for learners.

## roadmap

- **v0.1.0-mvp0**:
    - single falling piece ("I")
    - move left/right.
    - lock when piece is landed and respawn.


