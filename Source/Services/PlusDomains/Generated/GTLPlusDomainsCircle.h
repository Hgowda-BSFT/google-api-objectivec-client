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
//  GTLPlusDomainsCircle.h
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

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusDomainsCirclePeople;

// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsCircle
//

@interface GTLPlusDomainsCircle : GTLObject

// The description of this circle.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// The circle name.
@property (nonatomic, copy) NSString *displayName;

// ETag of this response for caching purposes.
@property (nonatomic, copy) NSString *ETag;

// The ID of the circle.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Identifies this resource as a circle. Value: "plus#circle".
@property (nonatomic, copy) NSString *kind;

// The people in this circle.
@property (nonatomic, retain) GTLPlusDomainsCirclePeople *people;

// Link to this circle resource
@property (nonatomic, copy) NSString *selfLink;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsCirclePeople
//

@interface GTLPlusDomainsCirclePeople : GTLObject

// The total number of people in this circle.
@property (nonatomic, retain) NSNumber *totalItems;  // unsignedIntValue

@end
