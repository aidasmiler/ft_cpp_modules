/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:45:47 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/01 14:01:26 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

Serializer::Serializer(){
}

Serializer::Serializer(const Serializer &ref){
	*this = ref;
}

Serializer &Serializer::operator=(const Serializer &ref){
	(void) ref;
	return (*this);
}

Serializer::~Serializer(){
}

uintptr_t Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t> (ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
