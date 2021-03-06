/* Copyright (c) 2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLPlusDomainsCircle.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ Domains API (plusDomains/v1)
// Description:
//   Builds on top of the Google+ platform for Google Apps Domains.
// Documentation:
//   https://developers.google.com/+/domains/
// Classes:
//   GTLPlusDomainsCircle (0 custom class methods, 7 custom properties)
//   GTLPlusDomainsCirclePeople (0 custom class methods, 1 custom properties)

#import "GTLPlusDomainsCircle.h"

// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsCircle
//

@implementation GTLPlusDomainsCircle
@dynamic descriptionProperty, displayName, ETag, identifier, kind, people,
         selfLink;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"plus#circle"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsCirclePeople
//

@implementation GTLPlusDomainsCirclePeople
@dynamic totalItems;
@end
