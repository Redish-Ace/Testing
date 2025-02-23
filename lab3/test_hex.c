#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 512
#define MAX 256

void read_hex_file(FILE *file, unsigned char arr[17][17], int size) {
    if (!file) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i <= size; i++){
        for (int j = 1; j <= size; j++) {
            int ch = fgetc(file);
            if (ch == EOF) {
                fprintf(stderr, "Unexpected end of file\n");
                return;
            }
            arr[i][j] = (unsigned char)ch;
            
            printf("%02x ", arr[i][j]);
        }
        printf("\n");
    }
}

bool findChar(unsigned char ch, unsigned char arr2[MAX]){
	for(int c=1; c<=MAX; c++){
		if(arr2[c] == ch){
			return true;
		}
	}
	
    return false;
}

int indexChar(unsigned char ch, unsigned char arr2[MAX]){
	for(int c=1; c<=MAX; c++){
		if(arr2[c] == ch){
			return c;
		}
	}
	
    return 1;
}

int getMax(int size, unsigned char arr[MAX]){
	int max = indexChar(arr[1], arr);
	for(int a=1; a<=size; a++){
		if(max < indexChar(arr[a], arr)){
			max = indexChar(arr[a], arr);
		}
	}
	return max;
}

void createNewArray(unsigned char arr[17][17], int size, unsigned char arr2[MAX], int finArr[17][17]){
int count = 1;
for (int i = 0; i < MAX; i++) {
        arr2[i] = 0;
    }

    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=MAX; c++){
                if(!findChar(arr[a][b], arr2)){
                    arr2[count] = arr[a][b];
                    count++;
                    break;
                }
            }
        }
    }
    
    printf("\n");
    for(int c=1; c<=count; c++){
    	printf("%02x ", arr2[c]);
    }
    printf("\n");
    
    /*for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
             finArr[a][b] = 0;
        }
    }*/
    
    unsigned char filler = (unsigned char)00;
    int max = getMax(count, arr2);
    for(int a=1; a<=max; a++){
        for(int b=1; b<=max; b++){
       		finArr[a][b] = 0;
        }
    }
    
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
       		finArr[a][b] = indexChar(arr[a][b], arr2);
        }
    }
    printf("\n");
    for(int a=1; a<=max; a++){
        for(int b=1; b<=max; b++){
            printf("%d ", finArr[a][b]);
        }
    	printf("\n");
    }
}


void associativity(FILE *file_write, int size, unsigned char arr[17][17]) {
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
                if(arr[a][(unsigned int)arr[b][c]] != arr[(unsigned int)arr[a][b]][c]){
                    count++;
                    break;
                }
            }
        }
    }
    printf("Associative ");
	if(count == 0){
          printf("+\n");
          fprintf(file_write, "+ ");
	}
	else{
        printf("-\n");
        fprintf(file_write, "- ");
	}
}

void mediumship(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
                for(int d=1; d<=size; d++){
                    if(arr[(unsigned int)arr[a][b]][(unsigned int)arr[c][d]] != arr[(unsigned int)arr[a][c]][(unsigned int)arr[b][d]]){
                    count++;
                    break;
                }
                }
            }
        }
    }
	printf("Mediumship ");
	if(count == 0){
        printf("+\n");
        fprintf(file_write, "+ ");
	}
	else{
        printf("-\n");
        fprintf(file_write, "- ");
	}
}

void paramediality(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
                for(int d=1; d<=size; d++){
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
        fprintf(file_write, "+ ");
	}
	else{
        printf("-\n");
        fprintf(file_write, "- ");
	}
}

void bicommutativity(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
                for(int d=1; d<=size; d++){
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
        fprintf(file_write, "+ ");
	}
	else{
        printf("-\n");
        fprintf(file_write, "- ");
	}
}

void ag_groupoid(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
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
        fprintf(file_write, "+ ");
	}
	else{
        printf("-\n");
        fprintf(file_write, "- ");
	}
}

void ga_groupoid(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
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
        fprintf(file_write, "+ ");
	}
	else{
        printf("-\n");
        fprintf(file_write, "- ");
	}
}

void ga1_groupoid(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
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
        fprintf(file_write, "+ ");
	}
	else{
        printf("-\n");
        fprintf(file_write, "- ");
	}
}

void ad_groupoid(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
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
        fprintf(file_write, "+ ");
	}
	else{
        printf("-\n");
        fprintf(file_write, "- ");
	}
}

void da_groupoid(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
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
        fprintf(file_write, "+ ");
	}
	else{
        printf("-\n");
        fprintf(file_write, "- ");
	}
}

void hexagonality(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        if(arr[a][a] != a) count++;
    }
  
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
                for(int d=1; d<=size; d++){
                    if(arr[arr[a][b]][arr[c][d]] != arr[arr[a][c]][arr[b][d]]){
                        count ++;
                        break;
                    }
                }
            }
        }
    }
  
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            if(arr[a][arr[a][b]] != arr[arr[a][b]][a] || arr[arr[a][b]][a] != b){
                count ++;
                break;
            }
        }
    }
  
    printf("Hexagonal ");
    if(count == 0){
        printf("+\n");
        fprintf(file_write, "+ ");
    }
    else{
        printf("-\n");
        fprintf(file_write, "- ");
    }
}

void right_distributivity(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
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
        fprintf(file_write, "+ ");
    }
    else{
        printf("-\n");
        fprintf(file_write, "- ");
    }
}

void left_distributivity(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
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
        fprintf(file_write, "+ ");
    }
    else{
        printf("-\n");
        fprintf(file_write, "- ");
    }
}

void right_unity(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size/2; b++){
            if(arr[a][b] != a){
                count ++;
                break;
            }
        }
    }
    printf("Unity R ");
    if(count == 0){
        printf("+\n");
        fprintf(file_write, "+ ");
    }
    else{
        printf("-\n");
        fprintf(file_write, "- ");
    }
}

void left_unity(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size/2; b++){
            if(arr[b][a] != a){
                count ++;
                break;
            }
        }
    }
    printf("Unity L ");
    if(count == 0){
        printf("+\n");
        fprintf(file_write, "+ ");
    }
    else{
        printf("-\n");
        fprintf(file_write, "- ");
    }
}

void unity(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size/2; b++){
            if(arr[a][b] != arr[b][a] || arr[b][a] != a){
                count ++;
                break;
            }
        }
    }
    printf("Unity ");
    if(count == 0){
        printf("+\n");
        fprintf(file_write, "+ ");
    }
    else{
        printf("-\n");
        fprintf(file_write, "- ");
    }
}

void ward(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
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
        fprintf(file_write, "+ ");
    }
    else{
        printf("-\n");
        fprintf(file_write, "- ");
    }
}

void inverse_ward(FILE *file_write, int size, unsigned char arr[17][17]){
    int count = 0;
    for(int a=1; a<=size; a++){
        for(int b=1; b<=size; b++){
            for(int c=1; c<=size; c++){
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
        fprintf(file_write, "+ ");
    }
    else{
        printf("-\n");
        fprintf(file_write, "- ");
    }
}

int main(int argc, char **argv) {
    char *filename = argv[1];
    FILE *file = fopen(filename, "rb");
    FILE *file_write = fopen("results.txt", "w");
    unsigned char arr[17][17];
    unsigned char arr2[MAX];
    int finArr[17][17];
    int size = 16;
    char awns;
    int count = 1;
    
      read_hex_file(file, arr, size);
      createNewArray(arr, size, arr2, finArr);
      
    /*do{
      read_hex_file(file, arr, size);
      
      fprintf(file_write, "%d: ", count);
      associativity(file_write, size, arr);
      mediumship(file_write, size, arr);
	paramediality(file_write, size, arr);
	bicommutativity(file_write, size, arr);
	ag_groupoid(file_write, size, arr);
	ga_groupoid(file_write, size, arr);
	ga1_groupoid(file_write, size, arr);
	ad_groupoid(file_write, size, arr);
	da_groupoid(file_write, size, arr);
	hexagonality(file_write, size, arr);
	right_distributivity(file_write, size, arr);
	left_distributivity(file_write, size, arr);
	right_unity(file_write, size, arr);
	left_unity(file_write, size, arr);
	unity(file_write, size, arr);
	ward(file_write, size, arr);
  inverse_ward(file_write, size, arr);
      fprintf(file_write, "\n");
        count++;
          //printf("\ncontinue? (y/n): ");
          //scanf(" %c", &awns);
    }while(!feof(file));*/
    fclose(file);
    return 0;
}

