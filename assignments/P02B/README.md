## Program 2B : Class Design

### Description: 

this page is useed to bring together my thoughts and brainsorm possible classes for  knucklebones 

### possible classes

*Dice Class:
  -Data: sides, current_value
  -Actions: roll(), get_value()
  -Relationships: Dice will be used by the Player to roll during the game.
**Player Class:

Data: name, score, dice_set, player_stats
Actions: roll_dice(), get_score(), update_score()
Relationships: Each player has a set of dice and participates in the game.

Game Class:

Data: players, rules, current_round
Actions: start_game(), end_game(), get_winner()
Relationships: The Game class controls the players and their actions.
**Knucklebones Class:

Data: board, knucklebones_specific_rules
Actions: start_round(), end_round(), calculate_winner()
Relationships: Inherits from Game, as Knucklebones is a game with specific rules and conditions.
