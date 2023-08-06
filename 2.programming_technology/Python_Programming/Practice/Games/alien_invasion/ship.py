import pygame

class Ship:

    def __init__(self,ai_game):
        # Initialize the ship and set its starting position
        self.screen = ai_game.screen
        self.settings = ai_game.settings
        self.screen_rect = ai_game.screen.get_rect()

        # Load the ship image and get its rect
        self.image = pygame.image.load('images/ship.bmp')
        self.rect = self.image.get_rect()
    

        # start each new ship at bottom center of screen
        self.rect.midbottom = self.screen_rect.midbottom
        # Store a decimal value for the ship's horizontal position.
        self.x = float(self.rect.x)

        # Moving Flag
        self.moveing_right = False
        self.moveing_left = False

    # Update the ship's position based on the movement flag
    def update(self):
        
        if self.moveing_right and self.rect.right < self.screen_rect.right:
            self.x += self.settings.ship_speed
        elif self.moveing_left and self.rect.left > self.screen_rect.left:
            self.x -= self.settings.ship_speed
        
        # Update rect object from self.x.
        self.rect.x = self.x

    def blitme(self):
        self.screen.blit(self.image, self.rect)

    
    