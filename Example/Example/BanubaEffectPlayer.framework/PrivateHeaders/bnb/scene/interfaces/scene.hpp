/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <memory>
#include <string>
#include <vector>

namespace bnb { namespace interfaces {

class asset_manager;
class entity;
class layer;
class render_list;

/**
 * A class representing a displayable scene. Aggregates in one place the
 * hierarchy of Entities with their Components,  AssetManager and RenderList
 * and makes it work all together.
 */
class BNB_EXPORT scene {
public:
    virtual ~scene() {}

    /** Set a new name for a scene. The name could be empty. */
    virtual void set_name(const std::string & name) = 0;

    /** Get a scene name. */
    virtual std::string get_name() const = 0;

    /** Get the root of entities hierarchy. It always exists and has a name "Root". */
    virtual std::shared_ptr<entity> get_root() const = 0;

    /** Get the AssetManager of a current scene. It always exists. */
    virtual std::shared_ptr<asset_manager> get_asset_manager() const = 0;

    virtual void add_layer(const std::shared_ptr<layer> & layer) = 0;

    virtual std::vector<std::shared_ptr<layer>> get_layers() const = 0;

    /** Return first found layer with name `layer_name` or NULL if such layer doesn't exist. */
    virtual std::shared_ptr<layer> get_layer(const std::string & layer_name) const = 0;

    virtual void remove_layer(const std::shared_ptr<layer> & layer) = 0;

    virtual void set_render_list(const std::shared_ptr<render_list> & render_list) = 0;

    virtual void clear_render_list() = 0;
};

} }  // namespace bnb::interfaces
/// @}

