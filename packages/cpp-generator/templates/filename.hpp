#ifndef ${uClassname}_HPP
# define ${uClassname}_HPP

# include <iostream>

class ${classname} {
  public:
    ${classname}(void);
    ${classname}(${classname} const &instance);
    ~${classname}(void);

    ${classname}    &operator=(${classname} const &rhs);
  protected:
  private:
};

#endif
