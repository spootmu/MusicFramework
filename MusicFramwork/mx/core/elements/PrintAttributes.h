// MusicXML Class Library
// Copyright (c) by Matthew James Briggs
// Distributed under the MIT License

#pragma once

#include "../../core/ForwardDeclare.h"
#include "../../core/AttributesInterface.h"
#include "../../core/Decimals.h"
#include "../../core/Enums.h"
#include "../../core/Integers.h"
#include "../../core/Strings.h"

#include <iosfwd>
#include <memory>
#include <vector>

namespace mx
{
    namespace core
    {

        MX_FORWARD_DECLARE_ATTRIBUTES( PrintAttributes )

        struct PrintAttributes : public AttributesInterface
        {
        public:
            PrintAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            TenthsValue staffSpacing;
            YesNo newSystem;
            YesNo newPage;
            PositiveInteger blankPage;
            XsToken pageNumber;
            bool hasStaffSpacing;
            bool hasNewSystem;
            bool hasNewPage;
            bool hasBlankPage;
            bool hasPageNumber;

            bool fromXElement( std::ostream& message, xml::XElement& xelement );
        };
    }
}
