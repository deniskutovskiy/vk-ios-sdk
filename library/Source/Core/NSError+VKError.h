//
//  NSError+VKError.h
//
//  Copyright (c) 2014 VK.com
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <VKSdkFramework/VKError.h>

extern NSString *const VKSdkErrorDomain;
extern NSString *const VkErrorDescriptionKey;

/**
* Category with implementation of VK error
*/
@interface NSError (VKError)

/// Returns vk error associated with that NSError
@property(nonatomic, readonly) VKError *vkError;

/**
Create new NSError with VKError
@param vkError Source error
@return New error with VKSdkErrorDomain domain
*/
+ (NSError *)errorWithVkError:(VKError *)vkError;

/**
Copies user info from this NSError into new error, with adding VKError
@param vkError Source error
@return New error with this error domain, code and user info
*/
- (NSError *)copyWithVkError:(VKError *)vkError;

@end
