# Strategy Game
A basic board game. Applying 4 features of OOP to implement

Language: C++

## Characters
- Swordman: HP 1000, ATK 12
- Spikeman: HP 800, ATK 8
- Knight: HP 1500, ATK 18

## Rules
- The swordman will have a bonus of 12 ATK vs the spikeman
- The spikeman will have a bonus of 25 ATK vs the knight
- The Knight will have a bonus of 10 ATK vs the swordman

## Bonus
- When there are three swordmen on the fields, each swordman will have a bonus of tripling (3x) its current ATK.
- When there are three spikemen on the fields, each spikeman will have a bonus of 5x its current ATK, 2x its current HP.
- When there are three Knights on the fields, each Knight will have a bonus of 2x its current ATK.

## Requirements
There are two teams on the field
- Random to decide which team will go first.
- Generate randomly  five chess pieces of three types Swordman, Spikeman and Knight for each team.
- Each team will take turns attacking the other's chess pieces.
- Print out the result after 3 turns.