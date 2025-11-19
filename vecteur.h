namespace formes {
    class Vecteur {
        private :
            double norme;
            double angle;
        public :
            Vecteur(double, double);
            double get_angle();
            int get_norme();
            void set_angle(int);
            void set_norme(int);
    };
}