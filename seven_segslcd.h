//POWERED BY #CHECHESWAP JESUS JOSE NAVARRETE BACA
//MARZO 2019
#ifndef SEVEN_SEGSLCD_H
#define SEVEN_SEGSLCD_H
enum scroll_direction{
    LEFT ,
    RIGHT
};
class seven_segslcd
{
    public:
        seven_segslcd(); 
        seven_segslcd(unsigned short int); 

        void print_digit(short int, short int);
        void print_character(char,short int); 
        void set_number(int);
        void set_string(char*);
        void set_string_static(char*); 
        void set_scroll_lapse(short int); 

        void check(); 
        void run_scroll(); 
        void set_scroll_direction(scroll_direction);

    private:
        void refresh_1(); 
        bool flags; 
        unsigned long long int  t_records[2][4]; 

        void refresh_2();
        int A, B, C, D; 
        int * fix;

        void spit_number(int); 

        int * regexp; 

        int * split(int); 
        int * vals; 
        int counter;

        bool spit_mode; 

        unsigned short int * numbers; 
        unsigned short int * charset; 
        char * charimage;
        int char_count;
        unsigned short int * positions;

        unsigned short int SN; 

        int getLength(char*);

        char * baseWord; 
        short int baseWordLength; 
        char * get_reverse(char*,int);
        char * reversedWord; 
        void word_manipulation_right();
        void word_manipulation_left();
        bool correct_index_stmt; 

        short int curr_index; 
        void _s0(); 
        unsigned long long int tmark_scroll; 
        bool _synchronized_scroll1; 
        short int changue_lapse; 
        scroll_direction xscrollDir;

        void drop_string_and_fill(char*); 
        int getIdMapped(char); 

    protected:
        bool tick(unsigned long long int, unsigned long long int, int); 
        void initial_commit(unsigned short int); 

};

#endif
