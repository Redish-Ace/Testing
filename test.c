#include <stdio.h>
#include <string.h>

void associativity(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    if(arr[i][arr[j][k]] == arr[arr[i][j]][k]){
		      count ++;
		      break;
		    }
	   	  }
	 	}
	}
	printf("Associative ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void mediumship(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    for(int l=0; l<n; l++){
		    if(arr [arr[i][j]] [arr[k][l]] == arr [arr[i][k]] [arr[j][l]])
		    {
		      count ++;
		      break;
		    }
	   	  }
	   	  }
	 	}
	}
	printf("Mediumship ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void paramediality(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    for(int l=0; l<n; l++){
		    if(arr [arr[i][j]] [arr[k][l]] == arr [arr[l][j]] [arr[k][i]])
		    {
		      count ++;
		      break;
		    }
	   	  }
	   	  }
	 	}
	}
	printf("Paramedial ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void bicommutativity(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    for(int l=0; l<n; l++){
		    if(arr [arr[i][j]] [arr[k][l]] == arr [arr[l][k]] [arr[j][i]])
		    {
		      count ++;
		      break;
		    }
	   	  }
	   	  }
	 	}
	}
	printf("Bicommutative ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void ag_groupoid(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    if(arr [arr[i][j]] [k] == arr [arr[k][j]] [i])
		    {
		      count ++;
		      break;
		    }
	   	  }
	 	}
	}
	printf("AG groupoid ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void ga_groupoid(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    if(arr[arr[i][j]][k] == arr[k][arr[j][i]])
		    {
		      count ++;
		      break;
		    }
	   	  }
	 	}
	}
	printf("GA groupoid ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void ga1_groupoid(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    if(arr[arr[i][j]][k] == arr[arr[k][i]][j])
		    {
		      count ++;
		      break;
		    }
	   	  }
	 	}
	}
	printf("GA-1 groupoid ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void ad_groupoid(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    if(arr[i][arr[j][k]] == arr[k][arr[j][i]])
		    {
		      count ++;
		      break;
		    }
	   	  }
	 	}
	}
	printf("AD groupoid ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void da_groupoid(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    if(arr[i][arr[j][k]] == arr[k][arr[i][j]])
		    {
		      count ++;
		      break;
		    }
	   	  }
	 	}
	}
	printf("DA groupoid ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void hexagonality(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
    if(arr[i][i] == i) count++;
  }
  
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    for(int l=0; l<n; l++){
		      if(arr[arr[i][j]][arr[k][l]] == arr[arr[i][k]][arr[j][l]])
		      {
		        count ++;
		        break;
		      }
	     	    }
	   	  }
	 	}
	}
	
	for(int i=0; i<n; i++){
		    for(int j=0; j<n; j++){
		      if(arr[i][arr[i][j]] == arr[arr[i][j]][i] && arr[arr[i][j]][i] == j)
		      {
		        count ++;
		        break;
		      }
	     	    }
	   	  }
	
	printf("Hexagonal ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void right_distributivity(int n, int arr[n][n]){
  int count = 0;
  for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  for(int k=0; k<n; k++){
		    if(arr[arr[i][j]][k] == arr[arr[i][k]][arr[j][k]])
		    {
		      count ++;
		      break;
		    }
	   	  }
	 	}
	}
	printf("Distributive R ");
	if(count > 0){
	  printf("+\n");
	}
	else{
	  printf("-\n");
	}
}

void read_file(FILE *file){
	int n = 0;
	fscanf(file, "%d", &n);
	int arr[n][n];
	//printf("%d\n", n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			fscanf(file, "%i", &arr[i][j]);
	 	}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%i ", arr[i][j]);
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
	hexagonality(n, arr);  //wrong
	right_distributivity(n, arr); //wrong
	//left_distributivity(n, arr);
	//right_unity(n, arr);
	//left_unity(n, arr);
	//unity(n, arr);
	//ward(n, arr);
	//inverse_ward(n, arr);
}

int main(){
	FILE *file = fopen("file.txt", "r");
	char awns;
	
	read_file(file);
	
	/*
	do{
	  read_file(file);
	  printf("\ncontinue? (y/n): ");
	  scanf(" %c", &awns);
	}while(awns == 'y');
	*/
	
	return 0;
}
