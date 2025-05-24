/**
 * Project Untitled
 */


#ifndef _USERREPOSITORY_H
#define _USERREPOSITORY_H

class UserRepository {
public: 
    
/**
 * @param user
 */
void save(User* user);
    
/**
 * @param id
 */
User* findById(String id);
private: 
    vector<User> memberList;
};

#endif //_USERREPOSITORY_H