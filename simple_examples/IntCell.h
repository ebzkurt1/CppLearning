#ifndef IntCell_H
#define IntCell_H


/**
 * A class for simulating an integer memory cell.
 */
class IntCell
{
    public:
        explicit IntCell( int initialCalue = 0 );
        int read( ) const;
        void write( int x );

    private:
        int storedValue;
};

#endif // DEBUG
