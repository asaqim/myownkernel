static char* const VGA_MEMORY = (char*)0xb8000;

static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;



void kernel_early(void){

}

int main(void){

	const char *str = "Hello world";

	unsigned int i =0; // for text string pos

	unsigned int j = 0; // for video buffer pos

	while(str[i]!='\0'){
		VGA_MEMORY[j] = str[i];
		VGA_MEMORY[j+1] = 0x07; //0x07 light grey color
		i++;
		j = j+2;
	}

	return 0;
}


