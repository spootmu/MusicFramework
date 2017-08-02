// MusicXML Class Library
// Copyright (c) by Matthew James Briggs
// Distributed under the MIT License

#pragma once

#include "../../core/ForwardDeclare.h"
#include "../../core/ElementInterface.h"
#include "../../core/elements/EmptyLineAttributes.h"

#include <iosfwd>
#include <memory>
#include <vector>

namespace mx
{
    namespace core
    {

        MX_FORWARD_DECLARE_ATTRIBUTES( EmptyLineAttributes )
        MX_FORWARD_DECLARE_ELEMENT( Falloff )

        inline FalloffPtr makeFalloff() { return std::make_shared<Falloff>(); }

        class Falloff : public ElementInterface
        {
        public:
            Falloff();

            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyLineAttributesPtr getAttributes() const;
            void setAttributes( const EmptyLineAttributesPtr& attributes );

            bool fromXElement( std::ostream& message, xml::XElement& xelement );

        private:
            EmptyLineAttributesPtr myAttributes;
        };
    }
}
