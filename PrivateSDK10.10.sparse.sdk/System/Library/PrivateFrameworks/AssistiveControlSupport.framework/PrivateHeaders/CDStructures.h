/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UCKeyboardLayout {
    unsigned short _field1;
    unsigned short _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct UCKeyboardTypeHeader _field5[1];
};

struct UCKeyboardTypeHeader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

