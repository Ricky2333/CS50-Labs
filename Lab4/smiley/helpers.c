#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // if this pixel's color is black, change its color
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtBlue == 0x00 && image[i][j].rgbtGreen == 0x00)
            {
                image[i][j].rgbtRed = 0xAA;
                image[i][j].rgbtGreen = 0xC4;
                image[i][j].rgbtBlue = 0xFF;
            }
        }
    }
}