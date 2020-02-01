/*
** EPITECH PROJECT, 2019
** main csfml
** File description:
** open windows with CSFML
*/
#include <SFML/Graphics/RenderWindow.h>

int main()
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.height = 800;
    video_mode.width = 800;
    video_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode,
                                   "MyWindow",
                                   sfDefaultStyle,
                                   NULL);

    while (sfRenderWindow_isOpen(window))
    {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}