## Program 2B : Class Design

### Description : this is a basic readme to formulate my thoughts and brainstorm classes for knuclebones


### - Dice Class 

  - Data : `sides`, `current_value`
  - Actions: `roll()`, `get_value()`
  - Relationships: Dice will be used by the Player to roll during the game.

### - Player Class :
  - Data : `first_name`, `last_name` `score`, `dice_set`, `player_stats`
  - Actions: `roll_dice()`, `get_score()`, `update_score()`, `get_fname`, `get_lname`
  - Relationships : Each player has a set of dice and participates in the game.

### - Game Class :
  - Data : `players`, `rules`, `current_round`, `winner`
  - Actions : `start_game()`, `end_game()`, `get_winner()`
  - Relationships : The Game class controls the players and their actions.

### - Knucklebones Class :
  - Data : `board`, `knucklebones_specific_rules`
  - Actions : `start_round()`, `end_round()`, `calculate_winner()`
  - Relationships : Inherits from Game, as Knucklebones is a game with specific rules and conditions.
