namespace targets {
// TODO: Insert the code for the alien class here

    class Alien 
    {
    public:

        Alien(int x_position, int y_position)
        {
            x_coordinate = x_position;
            y_coordinate = y_position;
        }

        int get_health()
        {
            return health;
        }

        bool hit()
        {
            if (health > 0) health--;
            return true;
        }

        bool is_alive()
        {
            return health;
            
        }

        bool teleport(int x_position, int y_position)
        {
            x_coordinate = x_position;
            y_coordinate = y_position;

            return true;
        }

        bool collision_detection(Alien other_alien)
        {
            if (other_alien.x_coordinate == x_coordinate && other_alien.y_coordinate == y_coordinate) return true;
            return false;
        }
    
    
        int x_coordinate { 0 };
        int y_coordinate { 0 };

    private:
        int health { 3 };
    
    };

}  // namespace targets