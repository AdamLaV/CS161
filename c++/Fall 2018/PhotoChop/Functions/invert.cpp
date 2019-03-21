void invert(Image& source) {
for(int i = 0; i < IMG_HEIGHT; i++) { //for each row
for(int j = 0; j < IMG_WIDTH; j++) { //for each column
source.data[i][j].red = clamp(255 - source.data[i][j],0,255);

}
}
}

int clamp(int n, int lower, int upper) {

return std::max(lower, std::min(n, upper));

}
