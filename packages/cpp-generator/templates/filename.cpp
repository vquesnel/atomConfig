#include "${classname}.hpp"

${classname}::${classname}(void)
{

}

${classname}::${classname}(${classname} const &instance)
{
  *this = instance;
  return;
}

${classname}::~${classname}(void)
{

}

${classname}    &${classname}::operator=(${classname} const &rhs) {
  if (this != &rhs) {}

  return (*this);
}
