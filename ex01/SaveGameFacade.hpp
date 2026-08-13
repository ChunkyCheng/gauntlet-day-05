#pragma once

#include <string>
#include "GameState.hpp"
#include "Serializer.hpp"
#include "Compressor.hpp"
#include "Checksum.hpp"
#include "Writer.hpp"

class	SaveGameFacade
{
	public:
		SaveGameFacade(void);
		SaveGameFacade(const SaveGameFacade& other) = delete;
		SaveGameFacade&	operator=(const SaveGameFacade& other) = delete;
		~SaveGameFacade(void);

		void	save(const GameState& state, const std::string& path);

	private:
		Serializer	m_serializer;
		Compressor	m_compressor;
		Checksum	m_checksum;
		Writer		m_writer;
};

