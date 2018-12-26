/**
 * @brief onlyRed set the blue and green value for each picture to black
 * @param source Image to modify
 */
void onlyRed(Image& source) {
    for(int i = 0; i < IMG_HEIGHT; i++) {
        for(int j = 0; j < IMG_WIDTH; j++) {
            source.data[i][j].blue = clamp(source.data[i][j].blue = 0);
            source.data[i][j].green = clamp(source.data[i][j].green = 0);

        }
    }
}


/**
 * @brief rotateLeft rotate an image left
 * @param source Image to be rotated
 */
void rotateLeft(Image& source) {
    Image newImage;

    for(int i = 0; i < IMG_HEIGHT; i++) {
        for(int j = 0; j < IMG_WIDTH; j++) {
            int newRow = i;
            int newCol = (IMG_WIDTH - 1) - j;

            newImage.data[newRow][newCol] = source.data[i][j];
        }
    }

    source = newImage;
}

