//
// Created by Tousif Zaman on 6/17/2020.
//

#include "../include/Player.h"

// Player1 definitions

Player1::Player1(){
    std::cout << "Player1: " << this->getName() << " is created." << " ";
    std::cout << "Health is: " << this->getHealth() << std::endl;
}

Player1::Player1(unsigned int health, std::string name){
    Player1::setHealth(health);
    Player1::setName(name);
    std::cout << "Player1: " << this->getName() << " is created." << " ";
    std::cout << "Health is: " << this->getHealth() << std::endl;
}

Player1::~Player1(){
    // Implement dtor here
}

void Player1::setHealth(unsigned int health) {
    m_health = health;
}

unsigned int Player1::getHealth(){
    return m_health;
}

void Player1::setName(std::string name){
    m_name = name;
}

std::string Player1::getName(){
    return m_name;
}

// Player2 definitions
Player2::Player2(){
    std::cout << "Player2: " << this->getName() << " is created." << " ";
    std::cout << "Health is: " << this->getHealth() << std::endl;
}

Player2::Player2(unsigned int health, std::string name){
    Player2::setHealth(health);
    Player2::setName(name);
    std::cout << "Player2: " << this->getName() << " is created." << " ";
    std::cout << "Health is: " << this->getHealth() << std::endl;
}

Player2::~Player2(){
    // Implement dtor here
}

void Player2::setHealth(unsigned int health) {
    m_health = health;
}

unsigned int Player2::getHealth(){
    return m_health;
}

void Player2::setName(std::string name){
    m_name = name;
}

std::string Player2::getName(){
    return m_name;
}