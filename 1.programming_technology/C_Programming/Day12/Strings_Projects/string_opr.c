int str_len(char* str){
	int i= 0;
	while(str[i] != '\0'){
		i++;	
	}
	return i;
}

void concat(char *str,char *str2, char* concat_str){
	int i =0 , j = 0;
	while(str[i] != '\0'){
		concat_str[j] = str[i];
		i++;
		j++;
	}
	i = 0;
	while(str2[i] != '\0'){
		concat_str[j] = str2[i];
		i++;
		j++;
	}
	concat_str[j] = '\0';
}

int str_cmp(char* str ,char* str2){
	int i = 0;
	while(str[i] == str2[i]){
		if(str[i] == '\0' && str2[i] == '\0'){
			return 1;//valid
		}
		i++;
		
	}
	return 0; // invalid
}

int str_find_first(char* str,char ch){
	int i = 0,pos = -1;
	while(str[i] != '\0'){
		if(str[i] == ch ){
			pos = i;
			return pos;
		}
		i++;
	}	
	return pos;
}


int str_find_last(char* str,char ch){
	int i = 0,pos = -1;
	while(str[i] != '\0'){
		if(str[i] == ch ){
			pos = i;
		}
		i++;
	}	
	return pos;
}

int str_find_all(char* str,char ch){
	int i = 0,pos = -1;
	while(str[i] != '\0'){
		if(str[i] == ch ){
			pos++;
		}
		i++;
	}
	if(pos >=0){
		return pos + 1;
	}	
	return pos;
}




