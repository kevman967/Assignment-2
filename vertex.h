class vertex{
    private:
        int id;
        double value;
    public:
    vertex();
    vertex(int,double);
    vertex(vertex& copy);
    //getter and setter
    int get_id();
    double get_value();
    void set_id(int);
    void set_value(double);
};