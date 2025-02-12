#include <stdio.h>
#include <string.h>

void associativity(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr[a][arr[b][c]] != arr[arr[a][b]][c]){
                    count ++;
                    break;
                }
            }
        }
    }
    printf("Associative ");
	if(count == 0){
        printf("+\n");
	}
	else{
        printf("-\n");
	}
}

void mediumship(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                for(int d=1; d<n; d++){
                    if(arr [arr[a][b]] [arr[c][d]] != arr [arr[a][c]] [arr[b][d]]){
                        count ++;
                        break;
                    }
                }
            }
        }
    }
	printf("Mediumship ");
	if(count == 0){
        printf("+\n");
	}
	else{
        printf("-\n");
	}
}

void paramediality(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                for(int d=1; d<n; d++){
                    if(arr [arr[a][b]] [arr[c][d]] != arr [arr[d][b]] [arr[c][a]]){
                        count ++;
                        break;
                    }
                }
            }
        }
    }
    printf("Paramedial ");
	if(count == 0){
        printf("+\n");
	}
	else{
        printf("-\n");
	}
}

void bicommutativity(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                for(int d=1; d<n; d++){
                    if(arr[arr[a][b]][arr[c][d]] != arr[arr[d][c]][arr[b][a]]){
                        count ++;
                        break;
                    }
                }
            }
        }
    }
	printf("Bicommutative ");
	if(count == 0){
        printf("+\n");
	}
	else{
        printf("-\n");
	}
}

void ag_groupoid(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr [arr[a][b]] [c] != arr [arr[c][b]] [a]){
                    count ++;
                    break;
                }
            }
        }
    }
	printf("AG groupoid ");
	if(count == 0){
        printf("+\n");
	}
	else{
        printf("-\n");
	}
}

void ga_groupoid(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr[arr[a][b]][c] != arr[c][arr[b][a]]){
                    count ++;
                    break;
                }
            }
        }
    }
	printf("GA groupoid ");
	if(count == 0){
        printf("+\n");
	}
	else{
        printf("-\n");
	}
}

void ga1_groupoid(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr[arr[a][b]][c] != arr[arr[c][a]][b]){
                    count ++;
                    break;
                }
            }
        }
    }
	printf("GA-1 groupoid ");
	if(count == 0){
        printf("+\n");
	}
	else{
        printf("-\n");
	}
}

void ad_groupoid(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr[a][arr[b][c]] != arr[c][arr[b][a]]){
                    count ++;
                    break;
                }
            }
        }
	}
	printf("AD groupoid ");
	if(count == 0){
        printf("+\n");
	}
	else{
        printf("-\n");
	}
}

void da_groupoid(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr[a][arr[b][c]] != arr[c][arr[a][b]]){
                    count ++;
                    break;
                }
            }
        }
	}
	printf("DA groupoid ");
	if(count == 0){
        printf("+\n");
	}
	else{
        printf("-\n");
	}
}

void hexagonality(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        if(arr[a][a] != a) count++;
    }
  
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                for(int d=1; d<n; d++){
                    if(arr[arr[a][b]][arr[c][d]] != arr[arr[a][c]][arr[b][d]]){
                        count ++;
                        break;
                    }
                }
            }
        }
    }
  
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            if(arr[a][arr[a][b]] != arr[arr[a][b]][a] || arr[arr[a][b]][a] != b){
                count ++;
                break;
            }
        }
    }
  
    printf("Hexagonal ");
    if(count == 0){
        printf("+\n");
    }
    else{
        printf("-\n");
    }
}

void right_distributivity(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr[arr[a][b]][c] != arr[arr[a][c]][arr[b][c]]){
                    count ++;
                    break;
                }
            }
        }
    }
    printf("Distributive R ");
    if(count == 0){
        printf("+\n");
    }
    else{
        printf("-\n");
    }
}

void left_distributivity(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr[c][arr[a][b]] != arr[arr[c][a]][arr[c][b]]){
                    count ++;
                    break;
                }
            }
        }
    }
    printf("Distributive L ");
    if(count == 0){
        printf("+\n");
    }
    else{
        printf("-\n");
    }
}

void right_unity(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            if(arr[a][b] != a){
                count ++;
                break;
            }
        }
    }
    printf("Unity R ");
    if(count == 0){
        printf("+\n");
    }
    else{
        printf("-\n");
    }
}

void left_unity(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            if(arr[b][a] != a){
                count ++;
                break;
            }
        }
    }
    printf("Unity L ");
    if(count == 0){
        printf("+\n");
    }
    else{
        printf("-\n");
    }
}

void unity(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            if(arr[a][b] != arr[b][a] || arr[a][b] != a){
                count ++;
                break;
            }
        }
    }
    printf("Unity ");
    if(count == 0){
        printf("+\n");
    }
    else{
        printf("-\n");
    }
}

void ward(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr[a][b] != arr[arr[a][c]][arr[b][c]]){
                    count ++;
                    break;
                }
            }
        }
    }
    printf("Ward ");
    if(count == 0){
        printf("+\n");
    }
    else{
        printf("-\n");
    }
}

void inverse_ward(int n, int arr[n][n]){
    int count = 0;
    for(int a=1; a<n; a++){
        for(int b=1; b<n; b++){
            for(int c=1; c<n; c++){
                if(arr[a][b] != arr[arr[c][a]][arr[c][b]]){
                    count ++;
                    break;
                }
            }
        }
    }
    printf("Inverse Ward ");
    if(count == 0){
        printf("+\n");
    }
    else{
        printf("-\n");
    }
}

void read_file(FILE *file){
    int n = 0;
	fscanf(file, "%d", &n);
	n++;
	int arr[n][n];
	//printf("%d\n", n);
	for(int a=1; a<n; a++){
		for(int b=1; b<n; b++){
			fscanf(file, "%i", &arr[a][b]);
                }
	}
	
	for(int a=1; a<n; a++){
		for(int b=1; b<n; b++){
			printf("%i ", arr[a][b]);
                }
                printf("\n");
	}
        associativity(n, arr);
	mediumship(n, arr);
	paramediality(n, arr);
	bicommutativity(n, arr);
	ag_groupoid(n, arr);
	ga_groupoid(n, arr);
	ga1_groupoid(n, arr);
	ad_groupoid(n, arr);
	da_groupoid(n, arr);
	hexagonality(n, arr);
	right_distributivity(n, arr);
	left_distributivity(n, arr);
	right_unity(n, arr);
	left_unity(n, arr);
	unity(n, arr);
	ward(n, arr);
  inverse_ward(n, arr);
}

int main(){
    FILE *file = fopen("file.txt", "r");
    char awns;
	
	//read_file(file);
	
	
	int i=0;
	do{
          read_file(file);
          printf("\ncontinue? (y/n): ");
          scanf(" %c", &awns);
          i++;
	}while(awns == 'y' && i<18);
	
	fclose(file);
	
	
	return 0;
}
