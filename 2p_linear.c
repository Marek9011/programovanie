#include<stdio.h>

// sudo apt-get install ascii cppcheck git
// syblime:
// view > hide minimap, statusbar
// preferences > setings user:
// {
// 	"color_scheme": "Packages/Color Scheme - Default/iPlastic.tmTheme",
// 	"scroll_speed": 0
// }
// preferences > key bindings user
// [
// { "keys": ["ctrl+tab"], "command": "next_view" },
// { "keys": ["ctrl+shift+tab"], "command": "prev_view" }
// ]

int search_linear(int find, int *data, int data_size){

	//data_size = sizeof(data)/sizeof(data[0]); // 2B!!!

	printf("data_size_in_function: %d\n", data_size);

	for(int i=0;i<data_size;i++){
		if(data[i]==find){
			printf("%d som NAsiel na %d. pozicii\n", find, i);
			return find;
		}
	}
	printf("NEnasiel som zhodu\n");
	return -1;
}

int main(){

	int data[] = {0,1,2,3,4,5,6,7,8,9};
	int data_size = sizeof(data)/sizeof(data[0]);
	printf("data_size_in_main:     %d\n", data_size);
	int find;

	while(1){
		printf("Zadaj hladané číslo: ");
		scanf("%d", &find);
		search_linear(find, data, data_size);
	}
}
