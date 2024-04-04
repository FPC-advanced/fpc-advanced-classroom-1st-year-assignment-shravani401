#include<stdio.h>
#include<string.h>

int get_fid()
{
    static int fid = 0;
    fid++;
    return fid;
}

typedef struct _fritacole {
    int id;
    char name[100];
    float height;
    int integrity;
    int ability;
    int discipline;
    int interest;
} fritacole;

typedef struct _foul {
    int id;
} foul;

typedef struct _point {
    int id;
} point;

typedef struct Team {
    char teamname[100];
    int numplayers;
    fritacole players[100];
} team;

typedef struct Game {
    team teams[2];
    int num_points;
    point p[100];
    int num_fouls;
    foul f[100];
} game;

fritacole input_fritacole()
{
   fritacole f;
   printf("Enter the name of fritacole:");
   scanf("%s", f.name);
   printf("Enter the height of fritacole:");
   scanf("%f",&f.height);
   printf("Enter the integrity of fritacole:");
   scanf("%d",&f.integrity);
   printf("Enter the ability of fritacole:");
   scanf("%d",&f.ability);
   printf("Enter the discipline of fritacole:");
   scanf("%d",&f.discipline);
   printf("Enter the interest of fritacole:");
   scanf("%d",&f.interest);
   f.id = get_fid();
   return f;
}

void input_n_fritacoles(int n, fritacole f[n])
{
   for (int i = 0; i < n; i++) {
    printf("Enter the details of fritacole for %d\n", i+1);
    f[i] = input_fritacole();
   }
}

team input_team()
{
    team t;
    printf("Enter the name of the team:");
    scanf("%s", t.teamname);
    printf("Enter the number of players in a team:");
    scanf("%d",&t.numplayers);
    input_n_fritacoles(t.numplayers,t.players);
    return t;
}

game input_game()
{
   game g;
   printf("Enter details of Team 1:\n");
   g.teams[0] = input_team();
   printf("Enter details of Team 2:\n");
   g.teams[1] = input_team();
   printf("Enter the number of points:");
   scanf("%d",&g.num_points);
   printf("Enter the number of fouls:");
   scanf("%d",&g.num_fouls);
   return g;
}

void update_game_point(game *g, point p)
{
    g->p[g->num_points++] = p;
}

void update_game_foul(game *g, foul f)
{
    g->f[g->num_fouls++] = f;
}

int verify_game(game g)
{
    int team_points[2] = {0};
    int team_fouls[2] = {0};
    
    for (int i = 0; i < g.num_points; i++) {
        team_points[g.p[i].id % 2]++;
    }
    
    for (int i = 0; i < g.num_fouls; i++) {
        team_fouls[g.f[i].id % 2]++;
    }

    if (team_points[0] > team_points[1]) {
        return 1;
    } else if (team_points[0] < team_points[1]) {
        return 2;
    } else {
        if (team_fouls[0] < team_fouls[1]) {
            return 1;
        } else if (team_fouls[0] > team_fouls[1]) {
            return 2;
        } else {
            return 0; // Draw
        }
    }
}

void print_fritacole(fritacole f)
{
    printf("ID: %d, Name: %s, Height: %.2f, Integrity: %d, Ability: %d, Discipline: %d, Interest: %d\n",
           f.id, f.name, f.height, f.integrity, f.ability, f.discipline, f.interest);
}

void print_team(team t)
{
    printf("Team Name: %s\n", t.teamname);
    printf("Number of Players: %d\n", t.numplayers);
    for (int i = 0; i < t.numplayers; i++) {
        printf("Player %d:\n", i + 1);
        print_fritacole(t.players[i]);
    }
}

int main()
{
    game g = input_game();
    printf("Game Verification Result: ");
    int result = verify_game(g);
    if (result == 0) {
        printf("The game is a draw.\n");
    } else {
        printf("Team %d won the game.\n", result);
    }
    return 0;
}
