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
    int frit_id;
}foul;
typedef struct  _point 
{
    int frit_id;
}point;
typedef struct Team {
    char teamname[100];
    int numplayers;
    fritacole players[100];
}team;

typedef struct Game {
    team teams[2];
    int num_points;
    point p[100];
    int num_fouls;
    foul f[100];
}game;


fritacole input_fritacole()
{
   fritacole f;
   printf("Enter the name of  fritacole:");
   scanf("%s", &f.name);
   printf("Enter the height of  fritacole:");
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

void input_n_fritacoles(int n, fritacole f[])
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
    scanf("%s",&t.teamname);
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
   g.num_fouls=g.num_points=0;
   return g;
}
point input_point() {
    point p;
    printf("Enter the frita ID of the fritacole scoring a point:");
    scanf("%d",&p.frit_id);
    return p;
} 
foul input_foul() {
    foul f;
    printf("Enter the frita ID of the fritacole comitting a foul:");
    scanf("%d",&f.frit_id);
    return f;
}
void update_game_point(game *g,point p)
{
   g->p[g->num_points++] = p;

}
void update_game_foul(game *g, foul f) {
    g->f[g->num_fouls++] = f;

}

int verifygame(game *g) {
   int t1_point = 0;
   int t2_point = 0;
   int t1_foul = 0;
   int t2_foul = 0;
for(int i = 0; i < g->num_points; i++) {
    if (g->p[i].frit_id < g->teams[0].numplayers) {
        t1_point++;
    }
    else {
        t2_point++;
    }
}
for(int i = 0; i < g->num_fouls; i++) {
    if (g->f[i].frit_id < g->teams[0].numplayers) {
        t1_foul++;
    }
    else {
        t2_foul++;
    }
}
   if (t1_point > t2_point) {
        return 1;//printf("Team 1 has won the game.\n");
   }
   else if (t2_point > t1_point) {
        return 2;//printf("Team 2 has won the game.\n");
   }
   else if (t1_foul < t2_foul) {
        return 1;//printf("Team 1 has fewer fouls, so Team 1 wins.\n");
   }
   else if (t1_foul > t2_foul) {
        return 2;  //printf("Team 2 has fewer fouls, so Team 2 wins.\n");
   }
   else {
       return 0;//printf("It's a tie.\n");
   }
}


void run_game( game *g)
{
    int in;
    while (1)
    {
        printf("enter 1 for point, 2 for foul, 3 for verify game 4 to quit");
        scanf("%d",&in);
        if(in == 1)
        {
            point p = input_point();
            update_game_point(g,p);
        }
        else if ( in == 2) {
            foul f = input_foul();
            update_game_foul(g,f);
        }
        else if ( in== 3) {
            int i = verifygame(g);
            if(i == 1) {
                printf("Team 1 wins the game.\n");
            } else if (i == 2) {
                printf("Team 2 wins the game.\n");
            } else{
                printf("It's a tie!\n");
            }
        } else if (in == 4) {
            break;
        } else {
            printf("Invalid input. Please try again.\n");
        }
    }
}

int main() {
    game g;
    g = input_game();
    run_game(&g);
    return 0;
}