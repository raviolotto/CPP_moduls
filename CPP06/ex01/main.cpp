/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 14:08:05 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-22 14:08:05 by raviolotto       ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    // Create an instance of Data
    Data originalData;
    originalData.iNumber = 42;
    originalData.fNumber = 3.14f;
    originalData.c = 'A';

    // Serialize the pointer to Data
    Data* dataPtr = &originalData;
    uintptr_t serialized = Serializer::serialize(dataPtr);

    // Deserialize the uintptr_t back to a pointer to Data
    Data* deserializedDataPtr = Serializer::deserialize(serialized);

    // Check if the deserialized pointer matches the original pointer
    if (deserializedDataPtr == dataPtr) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Original Data: intValue = " << dataPtr->iNumber
                  << ", floatValue = " << dataPtr->fNumber 
                  << ", charValue = " << dataPtr->c << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}