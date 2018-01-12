/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ${classname}.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ${_author} <${_author}@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: ${_date} by ${_author}          #+#    #+#             */
/*   Updated: ${_date} by ${_author}         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ${classname}_hpp
# define ${classname}_hpp

# include <iostream>

class ${classname} {
  private:
  public:
    ${classname}(void);
    ${classname}(${classname} const &instance);
    ~${classname}(void);

    ${classname}    &operator=(${classname} const &rhs);
  protected:

};

#endif
