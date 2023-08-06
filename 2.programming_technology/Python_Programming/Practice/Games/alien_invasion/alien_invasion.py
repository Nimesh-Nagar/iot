import sys
import pygame

from settings import Settings
from ship import Ship


# To manage Game assets and behavior
class AlienInvasion:

    def __init__(self):

        '''nitialize the game, and create game resources.'''
        pygame.init()
        self.settings = Settings()

        self.screen = pygame.display.set_mode((0, 0), pygame.FULLSCREEN)
        self.settings.screen_width = self.screen.get_rect().width
        self.settings.screen_height = self.screen.get_rect().height
        # self.screen = pygame.display.set_mode((self.settings.screen_width,self.settings.screen_height))
        pygame.display.set_caption("Alien Invasion")

        self.ship = Ship(self)

    def run_game(self):

        # Start the main loop for the game
        while True:
            self._check_events()
            self.ship.update()
            self._update_screen()

    
# --------------------- Watch for keyboard and mouse events --------------------- 
    def _check_events(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit() 

            elif event.type == pygame.KEYDOWN:
                self._check_keydown_event(event)
                       
            elif event.type == pygame.KEYUP:
                self._check_keyup_event(event)
  
    # ---Respond to keypresses---
    def _check_keydown_event(self,event):
        if event.key == pygame.K_RIGHT:
            self.ship.moveing_right = True
        elif event.key == pygame.K_LEFT:
            self.ship.moveing_left = True
        elif event.key == pygame.K_q:
            sys.exit()

    def _check_keyup_event(self,event):
        if event.key == pygame.K_RIGHT:
            self.ship.moveing_right = False
        elif event.key == pygame.K_LEFT:
            self.ship.moveing_left = False        
               

# ---------------------  Update images on the screen, and flip to the new screen --------------------- 
    def _update_screen(self):   
        self.screen.fill(self.settings.bg_color)
        
        self.ship.blitme()
        pygame.display.flip()


if __name__ == '__main__':

    ai = AlienInvasion()
    ai.run_game()
