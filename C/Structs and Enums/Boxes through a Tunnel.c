

struct box
{
	int length, width, height;
};

typedef struct box box;

int get_volume(box b) {
	return b.length*b.height*b.width;
}

int is_lower_than_max_height(box b) {
	if(b.height<MAX_HEIGHT)
    return 1;
    else {
    return 0;
    }
    /**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
}

