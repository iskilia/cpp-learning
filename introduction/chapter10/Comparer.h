//
// Created by Isaac Kilis on 14/6/2025.
//

#ifndef COMPARER_H
#define COMPARER_H


template <typename T>
class Comparer {
    private:
        int compare_count;
        int swap_count;
        // Function pointer directed to the function that performs the actual comparison
        bool (*comp)(const T&, const T&);
    protected:
        // virtual functions - similar to Java abstract functions. Can define in this class here or if
        // using = 0, then the derived class has to implement them
        virtual bool compare_impl(const T&, const T&);
        virtual void swap_impl(T& a, T& b);
    public:
        Comparer(bool (*f)(const T&, const T&)): compare_count(0), swap_count(0), comp(f) {};
        void reset();
        // const after the function declaration means that the function does not change any of the properties of the class
        bool compare(const T&, const T&);
        void swap(T&, T&);
        int get_compare_count() const;
        int get_swap_count() const;
};



#endif //COMPARER_H
