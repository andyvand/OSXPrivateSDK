//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (TSUNumberFormatStringUtilities)
+ (id)numberSymbols;
- (id)prefixOfNumberFormatSubpattern;
- (unsigned long long)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)suffixOfNumberFormatSubpattern;
- (unsigned long long)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)numberPortionOfNumberFormatSubpattern;
- (id)negativeSubpatternOfNumberFormatPattern;
- (id)positiveSubpatternOfNumberFormatPattern;
- (unsigned long long)indexOfNumberFormatSubpatternSeparator;
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)newRangesOfEscapedCharactersInNumberFormatPattern;
- (BOOL)isNumberFormatPattern;
- (id)newStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
@end

