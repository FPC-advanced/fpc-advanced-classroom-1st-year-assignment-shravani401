/*A Fritacole has attributes: name, height,  integrity, interest, ability, discipline.
There were two teams of Fritacoles playing a freyball game.
A freyball game consists of points and fouls
Each point is scored by a fritacole.
Each foul is committed by a fritacole.
The team that scores more goals wins the game.
If the goals are the same, the team that commits less fouls wins the game.

a. Write a function to verify whether the better team won a game?
Note that taller the person, the more chance that the fritacole may score a point.

b, Write a function to convert a fritacole into a string.
    

c. Write a function to convert a string into a fritacole.
*/
#include<stdio.h>
typedef struct _fritacole
{
    float height ;
    int interity ;
    char name[100] ;
    int interest;
    int discipline;
    int ability ;

}fritacole ;
typedef struct Team {
    char teamname[100];
    int numplayers;
    fritacole players[100];
}team ;

typedef struct  Game {
team  team[2];
int num_points;
} game;

typedef struct _foul {
    char name[100];
}foul;

typedef struct _point{
    char name[100];
}point;
 
 int main () {
    game g;
    g = input_game();
    t = input_team();

 }


game input_game()
{
    game g;
    g.team[0] = input_team();
    g.team[1] = input_team();
    printf("Enter number of points\n");
    scanf("%d",&g.num_points);
    return g; 
}

team input_team()
{
    team t;
    input_teamname(t.teamname);
    input_players(t.numplayers,t.players);
    printf("Enter number of players\n");
    scanf("%d",&t.numplayers);
    return t;
}

void input_teamname(char team_name[])
{    
    printf("Enter the name of the team:");
    scanf("%s",team_name);    
}

point input_point(){
   point p; 
   printf ("Enter the point scored by fritacole name:");
   scanf("%s",&p.name);
   return p;
}

foul input_foul(){
     point f;
     printf("Enter the point scored by fritacole name:");
     scanf("%s",&f.name);
     return f;

}