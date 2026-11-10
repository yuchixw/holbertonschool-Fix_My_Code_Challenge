#!/usr/bin/python3
"""
3-user module
"""


class User:
    """ User class representation """

    def __init__(self, email=None, password=None):
        """ Initialize user with email and password """
        self.email = email
        self.__password = password

    @property
    def password(self):
        """ Password getter """
        return self.__password

    @password.setter
    def password(self, pwd):
        """ Password setter with basic validation """
        if pwd is None or not isinstance(pwd, str):
            self.__password = ""
        else:
            self.__password = pwd

    def is_valid_password(self, pwd):
        """ Checks if the provided password matches the user's password """
        if pwd is None or not isinstance(pwd, str):
            return False
        return pwd == self.__password
